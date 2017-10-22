/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 00:03:59 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/22 09:52:16 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft.h"

typedef struct		s_input
{
	t_lst			*ants;
	t_lst			*rooms;
	t_lst			*links;
}					t_input;

typedef struct		s_room
{
	char			*id;
	int				sz;
	char			**links;
}					t_room;

typedef struct		s_farm
{
	int				ants;
	int				sz;
	t_room			*start;
	t_room			*end;
	t_room			**rooms;
}					t_farm;

char		**add_links(t_input *in, char *id);
t_room		*add_room(t_input *in);
t_bool		check_ants(t_lst *lines);
t_bool		check_dupe_links(t_lst *links);
t_bool		check_dupe_rooms(t_lst *rooms);
t_bool		check_input(t_input *input);
t_bool		check_lines(t_lst *lines);
t_bool		check_start_end(t_lst *lines);
int			count_links(t_lst *links, char *id);
int			count_rooms(t_lst *rooms);
t_bool		is_ants(char *ss);
t_bool		is_link(char *ss);
t_bool		is_pound(char *ss);
t_bool		is_room(char *ss);
t_bool		is_valid(char *ss);
void		move_ants(t_farm *farm, t_lst *path);
t_lst		*parse_lines(void);
t_farm		*process_farm(t_input *in);
t_input		*process_input(t_lst *lines);
int			strcmp_strict(char *s1, char *s2);
int			strcmp_1word(char *s1, char *s2);

#endif
