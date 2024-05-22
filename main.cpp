#define SC_ERROR_FAIL       0
#define SC_ERROR_SUCCESS    1

int main
{
    bRet = TRUE;
    nIsCloop = SC_ERROR_SUCCESS;
    
    if (bRet != TRUE)    
        return FALSE;

    if(nIsCloop == SC_ERROR_FAIL)
        return TRUE;

    return FALSE;
}