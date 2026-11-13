extern unsigned int uRam7fc83214;
extern unsigned int uRam7fc83408;


void fn_826535B8(void)

{
  uRam7fc83214 = 7;
  enforceInOrderExecutionIO();
  uRam7fc83408 = 0x800;
  enforceInOrderExecutionIO();
  return;
}

