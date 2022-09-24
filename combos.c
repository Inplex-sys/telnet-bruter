#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers/combos.h"

int cindex = 0;
Combo *combos = NULL;

void combo_add(char *username, char *password)
{
    if (combos == NULL)
        combos = calloc(1, sizeof(Combo));
    else
        combos = realloc(combos, (cindex + 2) * sizeof(Combo));

    combos[cindex].username = username;
    combos[cindex].password = password;

    combos[cindex].username_len = strlen(username);
    combos[cindex].password_len = strlen(password);
    cindex++;
}

void combos_init(void)
{
    combo_add("root", "");
    combo_add("admin", "");
    combo_add("root", "root");
    combo_add("admin", "admin");
    combo_add("user", "user");
    combo_add("ubnt", "ubnt");
    combo_add("ubuntu", "ubuntu");
    combo_add("guest", "guest");
    combo_add("support", "support");
    combo_add("default", "default");
    combo_add("test", "test");
    combo_add("fake", "fake");
    combo_add("root", "admin");
    combo_add("admin", "root");
    combo_add("root", "123");
    combo_add("root", "1234");
    combo_add("root", "12345");
    combo_add("root", "123456");
    combo_add("root", "changeme");
    combo_add("admin", "changeme");
    combo_add("guest", "1234");
    combo_add("guest", "12345");
    combo_add("guest", "123456");
    combo_add("admin", "1234");
    combo_add("admin", "12345");
    combo_add("admin", "123456");
    combo_add("hikvision", "hikvision");
    combo_add("root", "toor");
    combo_add("", "");
    combo_add("operator", "operator");
    combo_add("ftp", "ftp");
    combo_add("root", "888888");
    combo_add("default", "");
    combo_add("1234", "1234");
}
