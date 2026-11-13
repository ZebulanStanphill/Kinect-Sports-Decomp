extern int fn_8275D3A8();


void fn_8275FD10(int param_1)

{
  if (*(char *)(param_1 + 0x20) != '\x01') {
    do {
      fn_8275D3A8(param_1);
    } while (*(char *)(param_1 + 0x20) == '\x03');
  }
  return;
}

