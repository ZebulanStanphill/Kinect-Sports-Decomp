extern void fn_8265C990(void *ptr, unsigned int tag);
void fn_82C2B5A0(void *object)
{
  if (object != 0)
    fn_8265C990((char *)object - ((unsigned char *)object)[-1], 0x248c8000);
}
