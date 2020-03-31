/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 01:18:31 by jcueille          #+#    #+#             */
/*   Updated: 2020/03/31 14:24:50 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stddef.h>
# include <unistd.h>

size_t  ft_strlen(const char *s); 
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, const void*buf, size_t count);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strcpy(char *dest, char *src);

#endif
