extern int XMsgInProcessCall(unsigned int app, unsigned int message, void *param1, void *param2);

int fn_82A1E1E0(void *param)
{
    return XMsgInProcessCall(0xfe, 0x2b002, param, 0);
}
