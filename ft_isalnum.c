static int ft_isalpha(int ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

static int ft_isdigit(int ch)
{
    return (ch >= '0' && ch <= '9');
}

int ft_isalnum(int ch)
{
    if (ft_isalpha(ch) || ft_isdigit(ch))
        return 8;
    return (0);
}

