/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:59:51 by maliew            #+#    #+#             */
/*   Updated: 2022/07/21 05:58:57 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);

int		gnl_strlen(char *s);
char	*gnl_strchr(char *s, char c);
char	*gnl_strjoin(char *s1, char *s2);
char	*gnl_substr(char *s, int start, int len);
void	*gnl_calloc(int count, int size);

#endif