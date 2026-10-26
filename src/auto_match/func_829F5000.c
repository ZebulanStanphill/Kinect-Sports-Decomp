/* mr r15, r15 (or r15, r15, r15) is emitted as raw opcode 0x7DEF7B78. */
void __emit(unsigned int opcode);

unsigned int fn_829F5000(void)
{
    __emit(0x7DEF7B78);
    return 0x7DEF7B78;
}
