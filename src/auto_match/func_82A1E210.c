extern int XMsgInProcessCall(unsigned int app, unsigned int message, void *param1, void *param2);

int fn_82A1E210(void)
{
    return XMsgInProcessCall(0xfe, 0x2b004, 0, 0);
}
