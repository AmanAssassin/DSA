bool checksequenece(char large[], char *small)
{
    if (small[0] == '\0')
    {
        return true;
    }
    if (large[0] == '\0')
    {
        return false;
    }
    if (large[0] == small[0])
    {
        return checksequenece(large + 1, small + 1);
    }
    else
    {
        return checksequenece(large + 1, small);
    }
}
