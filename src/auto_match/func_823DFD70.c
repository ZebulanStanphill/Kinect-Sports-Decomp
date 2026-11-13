extern void *memcpy(void *, const void *, unsigned int);

typedef struct { unsigned char b[0x24]; } Blob_823DFD70;

typedef struct {
  int w0;
  float f1;
  float f2;
  float f3;
  Blob_823DFD70 blob;
} Tail_823DFD70;

char * fn_823DFD70(char *param_1, char *param_2)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  Tail_823DFD70 *d;
  Tail_823DFD70 *s;

  pcVar3 = param_1 + 0x40;
  pcVar2 = param_1;
  do {
    if (pcVar3 <= pcVar2) break;
    cVar1 = pcVar2[param_2 - param_1];
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == pcVar3) {
    pcVar2[-1] = '\0';
  }
  d = (Tail_823DFD70 *)pcVar3;
  s = (Tail_823DFD70 *)(param_2 + 0x40);
  d->w0 = s->w0;
  d->f1 = s->f1;
  d->f2 = s->f2;
  d->f3 = s->f3;
  d->blob = s->blob;
  *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
  *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  return param_1;
}
