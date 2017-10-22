/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 11:02:52 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define ISSPACE(c) (c == ' ' || c == '\t' || c == '\n' || ISSPACE2(c))
# define ISSPACE2(c) (c == '\r' || c == '\v' || c== '\f')
# define ISDIGIT(c) (c >= '0' && c <= '9')
# define ABS(x) ((x) < 0 ? -(x) : (x))
# define MAX(a, b) ((a) > (b) ? (a) : (b))
# define MIN(a, b) ((a) > (b) ? (b) : (a))
# define BIT_FLAG(n) (~(~0u << 1) << (n - 1))
# define SMOD(x, r) ((x) >= 0 ? (int)((unsigned)(x) % (r)) : ((x) % (r)))
# define PMOD(x, r) ((x) >= 0 ? (int)((unsigned)(x) % (r)) : ABS((x) % (r)))

# define BUFF_SIZE 256
# define BUFF_MAX 4096
# define FD_MAX 5000

typedef struct		s_pz
{
	void			*p;
	int				sz;
}					t_pz;

typedef struct		s_map_kv
{
	void			*key;
	void			*val;
}					t_map_kv;

typedef struct		s_map
{
	t_map_kv		*kvs;
	int				sz;
	int				key_sz;
	int				val_sz;
}					t_map;

typedef struct		s_lst
{
	void			*dat;
	struct s_lst	*prv;
	struct s_lst	*nxt;
	int				sz;
}					t_lst;

typedef struct		s_tupl
{
	void			*p[0];
}					t_tupl;

typedef enum		e_bool
{
	false,
	true,
}					t_bool;

void				ft_memzero(void *mm, int sz);
void				*ft_memset(void *mm, int cc, int sz);
void				*ft_memcpy(void *dst, const void *src, int sz);
void				*ft_memccpy(void *dst, const void *src, int cc, int sz);
void				*ft_memmove(void *dst, const void *src, int sz);
void				*ft_memchr(const void *mm, int cc, int sz);
int					ft_memcmp(const void *m1, const void *m2, int sz);
int					ft_strlen(const char *ss);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, int sz);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, int sz);
int					ft_strlcat(char *dst, const char *src, int sz);
char				*ft_strchr(const char *ss, char qry);
char				*ft_strchrnul(const char *ss, char qry);
char				*ft_strrchr(const char *ss, char qry);
char				*ft_strstr(const char *ss, const char *qry);
char				*ft_strnstr(const char *ss,
								const char *qry, int sz);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, int sz);
int					ft_strspn(const char *ss, const char *dlm);
int					ft_strcspn(const char *ss, const char *dlm);
char				*ft_strpbrk(const char *ss, const char *dlm);
t_bool				ft_strp_each(char *ss, t_bool (*pp)(char));
t_bool				ft_strp_any(char *ss, t_bool (*pp)(char));
char				*ft_strtok(char *ss, const char *dlm);
char				*ft_strtokbeg(const char *ss, const char *dlm);
int					ft_strtokamt(const char *ss, const char *dlm);
char				*ft_strtokcpy(char *dst, const char *src, const char *dlm);
char				*ft_strtoknxt(const char *ss, const char *dlm);
int					ft_strtoklen(const char *ss, const char *dlm);
int					ft_atoi(const char *ss);
int					ft_strtoi(const char *ss, char **edg);
long long			ft_strtolli(const char *ss, char **edg);
int					ft_strtoi_nol(const char *ss, char **edg);
int					ft_isalpha(int cc);
int					ft_isupper(char cc);
int					ft_isdigit(int cc);
int					ft_isalnum(int cc);
int					ft_isascii(int cc);
int					ft_isprint(int cc);
int					ft_toupper(int cc);
int					ft_tolower(int cc);
void				*ft_walloc(int sz);
void				*ft_memalloc(int sz);
void				ft_memdel(void **mem);
char				*ft_strnew(int sz);
void				ft_strdel(char **ss);
void				ft_strclr(char *ss);
void				ft_striter(char *ss, void (*ff)(char *));
void				ft_striteri(char *ss, void (*ff)(int, char *));
char				*ft_strmap(char const *ss, char (*ff)(char));
char				*ft_strmapi(char const *ss, char (*ff)(int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, int sz);
char				*ft_strsub(char const *ss, int beg, int sz);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *ss);
char				**ft_strsplit(char const *ss, const char *dlm);
char				*ft_itoa(int val);
void				ft_putchar(char cc);
void				ft_putstr(char const *ss);
void				ft_putendl(char const *ss);
void				ft_putnbr(int val);
void				ft_putchar_fd(char cc, int fd);
void				ft_putstr_fd(char const *ss, int fd);
void				ft_putendl_fd(char const *ss, int fd);
void				ft_putnbr_fd(int val, int fd);
void				ft_lstsplit(t_lst *l1, t_lst *l2);
t_lst				*ft_lstget(t_lst *ll, int ii);
t_lst				*ft_lstnew(void const *dat, int sz);
t_lst				*ft_lstdelone(t_lst **ll, void (*del)(void *, int));
t_lst				*ft_lstdel(t_lst **ll, void (*del)(void *, int));
t_lst				*ft_lstadd(t_lst **ll, t_lst *nod);
t_lst				*ft_lstapp(t_lst **l1, t_lst *l2);
t_lst				*ft_lstpop(t_lst **ll);
t_lst				*ft_lstbop(t_lst **ll);
t_lst				*ft_lstiter(t_lst *ll, void (*ff)(t_lst *elm));
t_lst				*ft_lstmap(t_lst *ll, t_lst *(*ff)(t_lst *elm));
t_lst				*ft_lstclnk(t_lst *ll);
t_lst				*ft_lstbsort(t_lst **ll, int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstmsort(t_lst **ll, int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstmin(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstmin2(t_lst *nod1, t_lst *nod2,
								int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstnmin(t_lst *ll,
								int (*cmp)(t_lst *a, t_lst *b), int sz);
t_lst				*ft_lstmax(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstmax2(t_lst *nod1, t_lst *nod2,
								int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstnmax(t_lst *ll,
								int (*cmp)(t_lst *a, t_lst *b), int sz);
t_lst				*ft_lstlgt(t_lst *ll, t_lst *nod,
								int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstglt(t_lst *ll, t_lst *nod,
								int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstmerge(t_lst **into, t_lst **outof,
									int (*cmp)(t_lst *a, t_lst *b));
t_lst				*ft_lstswp(t_lst **ll);
t_bool				ft_lstp_each(t_lst *ll, t_bool (*pred)(t_lst *nod));
t_bool				ft_lstp_uniq(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b));
t_bool				ft_lstp_sorted(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b));
t_bool				ft_lstp_rot_sorted(t_lst *ll,
										int (*cmp)(t_lst *a, t_lst *b));
int					ft_lstcmp_lli(t_lst *a, t_lst *b);
int					ft_lstsz(t_lst *ll);
int					ft_nbrlen(int val);
int					ft_diglen(int val);
long				ft_ldiglen(long val);
long long			ft_lldiglen(long long val);
unsigned			ft_udiglen(unsigned val, int base);
unsigned long		ft_ludiglen(unsigned long val, int base);
unsigned long long	ft_lludiglen(unsigned long long val, int base);
char				*ft_strrev(char *ss);
t_lst				*ft_lstsrev(t_lst **beg);
t_lst				*ft_slstsrev(t_lst **ll);
t_lst				*ft_lstnode(void const *dat, int sz);
t_lst				*ft_lstnfree(t_lst **ll, int dpth);
t_lst				*ft_lstdelcmp(t_lst **ll, void *qry,
								int (*cmp)(const void *, const void *, int));
t_lst				*ft_lstfind(t_lst *ll, void *qry,
								int (*cmp)(void *, void *, int));
t_lst				*ft_lstmemfind(t_lst *ll, void *qry, int ofst, int sz);
void				*ft_memcchr(const void *mm, int cc, int sz);
char				*ft_strbuf(const char *buf, int sz);
char				*ft_lststr(t_lst *ll);
int					ft_lstszsum(t_lst *ll);
int					get_next_line(const int fd, char **line);
t_map				*ft_mapnew(int sz, int key_sz, int val_sz);
t_map				*ft_mapsgen(t_map *mp, void *keys, void *vals);
t_map				*ft_mapdgen(t_map *mp, void *keys, void *vals);
t_map_kv			*ft_mapget(t_map *mp, void *key, int (*key_cmp)());
t_map_kv			*ft_mapnget(t_map *mp, void *key,
								int (*keycmp)(void *, void *, int), int sz);
int					ft_map_keycmp_str(void *s1, void *s2, int sz);
int					ft_map_keycmp_strn(void *s1, void *s2, int sz);
int					ft_map_keycmp_strnstr(void *str, void *query, int sz);
#endif
