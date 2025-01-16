int myatoi( char s[])
{
    int i,n,sign;
    // skip white space
    for( i=0 ; s[i]==' ' || s[i]=='\n' ||s[i]=='\t';i++) ;

    sign=1;
    if( s[i]=='+' || s[i]=='-')
        sign=( s[i++]=='+' ? 1 : -1 );

    for( n=0; s[i]>='0' && s[i]<='9' ; i++)
        n=10*n+s[i]-'0' ;

    return(sign*n);
}
