char fn_82486958(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *haystack;
  
  haystack = (char *)(param_1 + 0x234);
  pcVar1 = strstr(haystack,"boxing");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(haystack,"football");
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(haystack,"volleyball");
      if (pcVar1 == (char *)0x0) {
        pcVar1 = strstr(haystack,"tabletennis");
        if (pcVar1 == (char *)0x0) {
          pcVar1 = strstr(haystack,"bowling");
          cVar2 = (pcVar1 == (char *)0x0) + '\x01';
        }
        else {
          cVar2 = '\x03';
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = '\x04';
    }
  }
  else {
    cVar2 = '\x05';
  }
  return cVar2;
}

