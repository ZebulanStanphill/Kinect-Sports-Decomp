extern char lbl_8322B13C[];
extern void *lbl_8322B130;
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern int fn_82BE5848(void *alloc, void *free, int flag);

int fn_82BE28A8(void *alloc, void *free)
{
    int result;

    if (fn_82BEA200(lbl_8322B13C, "MassiveAdClient3::XMassiveAdClient::SetCustomMemoryFunctions") == 0)
        return 0x69;
    result = 0x69;
    if (lbl_8322B130 != 0)
        result = 0xc9;
    else if ((alloc == 0 && free != 0) || (alloc != 0 && free == 0))
        result = 0x6a;
    else
        result = fn_82BE5848(alloc, free, 1) ? 0 : result;
    fn_82BEA230(lbl_8322B13C, "MassiveAdClient3::XMassiveAdClient::SetCustomMemoryFunctions");
    return result;
}
