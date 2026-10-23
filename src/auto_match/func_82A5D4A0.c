extern int KeSetEvent(void *Event, int Increment, unsigned char Wait);
extern int XAudioUnregisterRenderDriverClient(void *client);

void fn_82A5D4A0(int param_1)
{
  KeSetEvent(*(void **)(param_1 + 0x30), 1, 0);
  if (*(void **)(param_1 + 0x20) != 0) {
    XAudioUnregisterRenderDriverClient(*(void **)(param_1 + 0x20));
    *(void **)(param_1 + 0x20) = 0;
  }
  *(int *)(*(int *)(param_1 + 0x30) + 4) = 0;
}
