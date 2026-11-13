void fn_82CD3838(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      (**(int (***)())(param_1 + 0x3948))
                (*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x18),
                 *(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20),0,
                 *(unsigned int *)(param_1 + 0x54),param_1);
      return;
    }
    (**(int (***)())(param_1 + 0x3944))
              (*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),
               *(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x28),
               *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30),0,
               *(unsigned int *)(param_1 + 0x54));
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(int (***)())(param_1 + 0x393c))
              (*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x24),0,
               *(unsigned int *)(param_1 + 0x54),param_1);
    return;
  }
  (**(int (***)())(param_1 + 0x3940))
            (*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x28),
             *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30),0,
             *(unsigned int *)(param_1 + 0x54),param_1);
  return;
}

