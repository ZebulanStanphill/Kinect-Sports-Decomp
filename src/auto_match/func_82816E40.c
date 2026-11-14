/* Does the buffer start with the four characters "CAFF"? Terminates it after four characters for the
   compare and restores the byte afterwards. */
int strcmp(const char *a, const char *b);

extern char lbl_8201E0FC[];   /* "CAFF" */

int fn_82816E40(char *tag)
{
    char saved = tag[4];
    int same;

    tag[4] = 0;
    same = strcmp(tag, lbl_8201E0FC) == 0;
    tag[4] = saved;
    return same;
}
