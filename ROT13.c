#include <windows.h>
#include <stdio.h>
#define INPUT 1001

HANDLE hInput;
HANDLE hRot13;
char DataBuf[INPUT];
char Rot13Buf[INPUT];
DWORD Bytes = sizeof(DataBuf);
DWORD BytesWritten = 0;
int i;


int CreateBothFiles() {   
   hInput = CreateFile("input.txt", 
                         GENERIC_READ | GENERIC_WRITE,
                         FILE_SHARE_READ | FILE_SHARE_WRITE, 
                         NULL, 
                         CREATE_NEW, 
                         FILE_ATTRIBUTE_NORMAL, 
                         NULL);

   
   if (hInput == INVALID_HANDLE_VALUE) {
      printf("Input.txt already exists, delete the Input.txt that is stored in the same directory as this executable, and execute the programme again to write new stuff to a new file called Input.txt.\n");
      return -1; 
   } 

   hRot13 = CreateFile("ROT13.txt",
                          GENERIC_READ | GENERIC_WRITE,
                          FILE_SHARE_READ | FILE_SHARE_WRITE, 
                          NULL,
                          CREATE_NEW,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
   
   if (hRot13 == INVALID_HANDLE_VALUE) {
      printf("ROT13.txt already exists, delete the ROT13.txt that is stored in the same directory as this executable, and execute the programme again to write new stuff to a new file called ROT13.txt\n");
      return -1;
   }
}

void LogKeyToDBuf() {
         fgets(DataBuf, INPUT, stdin);
}

void WriteToInput() {
   BOOL Input = WriteFile(hInput, 
                       DataBuf, 
                       Bytes, 
                       &BytesWritten, 
                       NULL); 
}
void WriteToRot13() {
   BOOL ROT13 = WriteFile(hRot13, 
                       Rot13Buf, 
                       Bytes, 
                       &BytesWritten, 
                       NULL); 
}

void ConvertToRot13() { 
   for (i = 0; i < INPUT; i++) {
       if (DataBuf[i] == 'A') {
          Rot13Buf[i] = 'N';
       }
       else if (DataBuf[i] == 'B') {
          Rot13Buf[i] = 'O';
       }
       else if (DataBuf[i] == 'C') {
          Rot13Buf[i] = 'P';
       }
       else if (DataBuf[i] == 'D') {
          Rot13Buf[i] = 'Q';
       }
       else if (DataBuf[i] == 'E') {
          Rot13Buf[i] = 'R';
       }
       else if (DataBuf[i] == 'F') {
          Rot13Buf[i] = 'S';
       }
       else if (DataBuf[i] == 'G') {
          Rot13Buf[i] = 'T';
       }
       else if (DataBuf[i] == 'H') {
          Rot13Buf[i] = 'U';
       }
       else if (DataBuf[i] == 'I') {
          Rot13Buf[i] = 'V';
       }
       else if (DataBuf[i] == 'J') {
          Rot13Buf[i] = 'W';
       }
       else if (DataBuf[i] == 'K') {
          Rot13Buf[i] = 'X';
       }
       else if (DataBuf[i] == 'L') {
          Rot13Buf[i] = 'Y';
       }  
       else if (DataBuf[i] == 'M') {
          Rot13Buf[i] = 'Z';
       }
       else if (DataBuf[i] == 'N') {
          Rot13Buf[i] = 'A';
       }
       else if (DataBuf[i] == 'O') {
          Rot13Buf[i] = 'B';
       }
       else if (DataBuf[i] == 'P') {
          Rot13Buf[i] == 'C';
       }
       else if (DataBuf[i] == 'Q') {
          Rot13Buf[i] = 'D';
       }
       else if (DataBuf[i] == 'R') {
          Rot13Buf[i] = 'E';
       }
       else if (DataBuf[i] == 'S') {
          Rot13Buf[i] = 'F';
       }
       else if (DataBuf[i] == 'T') {
          Rot13Buf[i] = 'G';
       }
       else if (DataBuf[i] == 'U') {
          Rot13Buf[i] = 'H';
       }
       else if (DataBuf[i] == 'V') {
          Rot13Buf[i] = 'I';
       }
       else if (DataBuf[i] == 'W') {
          Rot13Buf[i] = 'J';
       }
       else if (DataBuf[i] == 'X') {
          Rot13Buf[i] = 'K';
       }
       else if (DataBuf[i] == 'Y') {
          Rot13Buf[i] = 'L';
       }
       else if (DataBuf[i] == 'Z') {
          Rot13Buf[i] = 'M';
       }
       else if (DataBuf[i] == 'a') {
          Rot13Buf[i] = 'n';
       }
       else if (DataBuf[i] == 'b') {
          Rot13Buf[i] = 'o';
       }
       else if (DataBuf[i] == 'c') {
          Rot13Buf[i] = 'p';
       }
       else if (DataBuf[i] == 'd') {
          Rot13Buf[i] = 'q';
       }
       else if (DataBuf[i] == 'e') {
          Rot13Buf[i] = 'r';
       }
       else if (DataBuf[i] == 'f') {
          Rot13Buf[i] = 's';
       }
       else if (DataBuf[i] == 'g') {
          Rot13Buf[i] = 't';
       }
       else if (DataBuf[i] == 'h') {
          Rot13Buf[i] = 'u';
       }
       else if (DataBuf[i] == 'i') {
          Rot13Buf[i] = 'v';
       }
       else if (DataBuf[i] == 'j') {
          Rot13Buf[i] = 'w';
       } 
       else if (DataBuf[i] == 'k') {
          Rot13Buf[i] = 'x';
       }
       else if (DataBuf[i] == 'l') {
          Rot13Buf[i] = 'y';
       }
       else if (DataBuf[i] == 'm') {
          Rot13Buf[i] = 'z';
       }
       else if (DataBuf[i] == 'n') {
          Rot13Buf[i] = 'a';
       }
       else if (DataBuf[i] == 'o') {
          Rot13Buf[i] = 'b';
       }
       else if (DataBuf[i] == 'p') {
          Rot13Buf[i] = 'c';
       }
       else if (DataBuf[i] == 'q') {
          Rot13Buf[i] = 'd';
       }
       else if (DataBuf[i] == 'r') {
          Rot13Buf[i] = 'e';
       }
       else if (DataBuf[i] == 's') {
          Rot13Buf[i] = 'f';
       } 
       else if (DataBuf[i] == 't') {
          Rot13Buf[i] = 'g';
       }
       else if (DataBuf[i] == 'u') {
          Rot13Buf[i] = 'h';
       }
       else if (DataBuf[i] == 'v') {
          Rot13Buf[i] = 'i';
       } 
       else if  (DataBuf[i] == 'w') {
          Rot13Buf[i] = 'j';
       }
       else if (DataBuf[i] == 'x') {
          Rot13Buf[i] = 'k';
       }
       else if (DataBuf[i] == 'y') {
          Rot13Buf[i] = 'l';
       }
       else if (DataBuf[i] == 'z') {
          Rot13Buf[i] = 'm';
       } 
       else if (DataBuf[i] == 0x20) {   
          Rot13Buf[i] = 0x20;
       } 
       else if (DataBuf[i] == '0') {
          Rot13Buf[i] = '0';
       }
       else if (DataBuf[i] == '1') {
          Rot13Buf[i] = '1';
       }
       else if (DataBuf[i] == '2') {
          Rot13Buf[i] = '2';
       }
       else if (DataBuf[i] == '3') {
          Rot13Buf[i] = '3';
       }
       else if (DataBuf[i] == '4') {
          Rot13Buf[i] = '4';
       }
      else if (DataBuf[i] == '5') {
          Rot13Buf[i] = '5';
      }
      else if (DataBuf[i] == '6') {
          Rot13Buf[i] = '6';
      } 
      else if (DataBuf[i] == '7') {
          Rot13Buf[i] = '7';
      }
      else if (DataBuf[i] == '8') {
          Rot13Buf[i] = '8';
      }
      else if (DataBuf[i] == '9') {
          Rot13Buf[i] = '9';
      } 
      else if (DataBuf[i] == '.') {
          Rot13Buf[i] = '.';
      }
      else if (DataBuf[i] == ',') {
          Rot13Buf[i] = ',';
      }
      else if (DataBuf[i] == '-') {
          Rot13Buf[i] = '-';
      }
      else if (DataBuf[i] == '!') {
          Rot13Buf[i] = '!';
      }
      else if (DataBuf[i] == '?') {
          Rot13Buf[i] = '?';
      }
      else if (DataBuf[i] == '/') {
          Rot13Buf[i] = '/';
      } 
      else if (DataBuf[i] == '\'') {
          Rot13Buf[i] = '\'';
      }
      else if (DataBuf[i] == '\"') {
          Rot13Buf[i] = '\"';
      }
      else if (DataBuf[i] == '%') {
          Rot13Buf[i] = '%';
      }
      else if (DataBuf[i] == '&') {
          Rot13Buf[i] = '&';
      }
      else if (DataBuf[i] == '(') {
          Rot13Buf[i] = '(';
      }
      else if (DataBuf[i] == ')') {
          Rot13Buf[i] = ')';
      }
      else if (DataBuf[i] == '_') {
          Rot13Buf[i] = '_';
      }
      else if (DataBuf[i] == '+') {
          Rot13Buf[i] = '+';
      }
      else if (DataBuf[i] == '=') {
          Rot13Buf[i] = '=';
      }
      else if (DataBuf[i] == '{') {
          Rot13Buf[i] = '{';
      }
      else if (DataBuf[i] == '[') {
          Rot13Buf[i] = '[';
      }
      else if (DataBuf[i] == '}') {
          Rot13Buf[i] = '}';
      }
      else if (DataBuf[i] == ']') {
          Rot13Buf[i] = ']';
      }
      else if (DataBuf[i] == '~') {
          Rot13Buf[i] = '~';
      }
      else if (DataBuf[i] == ':') {
          Rot13Buf[i] = ':';
      }
      else if (DataBuf[i] == ';') {
          Rot13Buf[i] = ';';
      }
   }
}

void Keylog() {
    CreateBothFiles(); /* Creating both .txt files */
    LogKeyToDBuf(); /* Get user input */
    WriteToInput(); /* Write user input to Input.txt */
    ConvertToRot13(); /* Take user input and store its ROT13 in a Rot13Buf */
    WriteToRot13(); /* Write ROT13 of user input to ROT13.txt */
    CloseHandle(hInput); /* Close handle to Input.txt, it's no longer needed */
    CloseHandle(hRot13); /* Close handle to ROT13.txt, it's no longer needed */
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    Keylog();
    return 0;
}

