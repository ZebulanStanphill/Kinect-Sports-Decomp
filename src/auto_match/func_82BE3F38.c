extern char lbl_8322B13C[];
extern void *lbl_8322B130;
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern int fn_82BE31D0(void *client, int a, int b);

int fn_82BE3F38(void)
{
    int result;

    if (fn_82BEA200(lbl_8322B13C, "XMassiveAdClient::UpdatePlayers") == 0)
        return 0x69;
    if (lbl_8322B130 == 0)
        result = 0xc8;
    else
        result = fn_82BE31D0(lbl_8322B130, 1, 1);
    fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::UpdatePlayers");
    return result;
}
