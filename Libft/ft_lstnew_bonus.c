/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:46:16 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/08/23 19:42:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
t_list	*ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (new == NULL)
        return (0);
    new->content = content;
    new->next = NULL;
    return (new);
}

int main(void)
{
    int content = 98;
    t_list *ls;

    ls = ft_lstnew(&content);
    printf("ls: %s", ls->content);
    return (0);
}
