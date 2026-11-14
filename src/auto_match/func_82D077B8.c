int fn_82D077B8(int primitiveType, int indexCount)
{
    switch (primitiveType) {
    case 1:
        return indexCount;
    case 2:
        return indexCount / 2;
    case 3:
        return indexCount / 3;
    case 4:
        return indexCount - 2;
    }
    return 0;
}
