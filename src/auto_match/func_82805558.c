unsigned int fn_82805558(const unsigned int *words, unsigned char offset, unsigned char width)
{
    unsigned int high = words[1];
    unsigned int low = words[0];
    return (((high << 1) << (31 - offset)) | (low >> offset)) & ((1U << width) - 1);
}
