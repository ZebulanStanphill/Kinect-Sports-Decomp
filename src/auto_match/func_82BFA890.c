typedef struct G { int pad[4]; void *h; } G;
extern int NtClose(void *h);
extern G lbl_8322FD08;

void fn_82BFA890(void)
{
    if (lbl_8322FD08.h != 0) {
        NtClose(lbl_8322FD08.h);
        lbl_8322FD08.h = 0;
    }
}
