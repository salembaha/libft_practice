#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {
    const char *user = "sabahass";
    const char *email = "sabahass@student.codam.nl";
    const char *filename = (argc > 1) ? argv[1] : "filename";
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);

    printf("/* ************************************************************************** */\n");
    printf("/*                                                                            */\n");
    printf("/*                                                        :::      ::::::::   */\n");
    printf("/*   %-46s:+:      :+:    :+:   */\n", filename);
    printf("/*                                                    +:+ +:+         +:+     */\n");
    printf("/*   By: %-39s+#+  +:+       +#+        */\n", user);
    printf("/*                                                +#+#+#+#+#+   +#+           */\n");
    printf("/*   Created: %04d/%02d/%02d %02d:%02d:%02d by %-13s#+#    #+#             */\n",
        tm_struct->tm_year + 1900, tm_struct->tm_mon + 1, tm_struct->tm_mday,
        tm_struct->tm_hour, tm_struct->tm_min, tm_struct->tm_sec, user);
    printf("/*   Updated: %04d/%02d/%02d %02d:%02d:%02d by %-13s###   ########.fr       */\n",
        tm_struct->tm_year + 1900, tm_struct->tm_mon + 1, tm_struct->tm_mday,
        tm_struct->tm_hour, tm_struct->tm_min, tm_struct->tm_sec, user);
    printf("/*                                                                            */\n");
    printf("/* ************************************************************************** */\n");
    return 0;
}
