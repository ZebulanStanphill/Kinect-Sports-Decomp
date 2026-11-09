// Calls fn_82D89BD8, then forwards (float, int) to slot 0x5c of the interface embedded at +0xe0.
typedef void (*Slot_8240DE60)(int self, float value, int arg);
extern int fn_82D89BD8();

void fn_8240DE60(int param_1, float value, int arg)
{
    fn_82D89BD8();
    (*(Slot_8240DE60 *)(*(int *)(param_1 + 0xe0) + 0x5c))(param_1 + 0xe0, value, arg);
}
