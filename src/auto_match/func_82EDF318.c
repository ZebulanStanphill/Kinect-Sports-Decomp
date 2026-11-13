void fn_82EDF318(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      (**(int (***)())(param_1 + 0x397c))
                (*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x18),
                 *(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20),0,
                 *(unsigned int *)(param_1 + 0x50),param_1);
      return;
    }
    (**(int (***)())(param_1 + 0x3978))
              (*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),
               *(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x28),
               *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30),0,
               *(unsigned int *)(param_1 + 0x50));
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(int (***)())(param_1 + 0x3970))
              (*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x24),0,
               *(unsigned int *)(param_1 + 0x50),param_1);
    return;
  }
  (**(int (***)())(param_1 + 0x3974))
            (*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x28),
             *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30),0,
             *(unsigned int *)(param_1 + 0x50),param_1);
  return;
}

