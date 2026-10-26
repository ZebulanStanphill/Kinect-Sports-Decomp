typedef void (*PVFV)(void);
extern void *fn_82F6E1C8(unsigned int n, unsigned int size);
extern PVFV *__onexitbegin;
extern PVFV *__onexitend;

int fn_82F63D60(void)
{
    PVFV *onexitbegin = (PVFV *)fn_82F6E1C8(32, sizeof(PVFV));
    __onexitend = __onexitbegin = onexitbegin;
    if (onexitbegin == 0)
        return 0x18;
    *onexitbegin = (PVFV)0;
    return 0;
}
