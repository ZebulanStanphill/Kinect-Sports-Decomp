int fn_82C3CD98(int status)
{
    switch (status) {
    case 0:
    case 6:
        return 0;
    case 2:
        return 0x600000;
    case -1:
        return 0x80600000;
    case -9:
        return 0x80600003;
    case 5:
        return 0x80600004;
    case -5:
        return 0x805000b7;
    case 1:
        return 0x80600005;
    case -6:
        return 0x80600006;
    case -3:
        return 0x80070057;
    case 7:
        return 0x80600008;
    default:
        return 0x80004005;
    }
}
