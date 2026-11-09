// Calls fn_82D89BD8, then forwards (float, int) to slot 0x60 of the interface embedded at +0xe0.
typedef void (*Slot_82563850)(int self, float value, int arg);
extern int fn_82D89BD8();

void fn_82563850(int param_1, float value, int arg)
{
    fn_82D89BD8();
    (*(Slot_82563850 *)(*(int *)(param_1 + 0xe0) + 0x60))(param_1 + 0xe0, value, arg);
}
