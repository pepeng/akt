#include "_global.h"

#define caption "Armadillo Key Tool v0.2"
#define date_compile "Apr 2013"

BOOL CALLBACK DlgAbout(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
        MessageBeep(MB_ICONINFORMATION);
        char stc_txt[50]="";
        sprintf(stc_txt, "%s (%s)", caption, date_compile);
        SetDlgItemTextA(hwndDlg, IDC_STC_TITLE, stc_txt);
    }
    return TRUE;

    case WM_COMMAND:
    {
        switch(LOWORD(wParam))
        {
        case IDC_BTN_OK:
        {
            EndDialog(hwndDlg, 0);
        }
        return TRUE;
        }
    }
    return TRUE;
    }
    return FALSE;
}