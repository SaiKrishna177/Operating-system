#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() {
   int sourceFile, destFile;
   char buffer[4096];
   ssize_t bytesRead;
   sourceFile = open("source.txt", O_RDONLY);
   destFile = open("destination.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
   while ((bytesRead = read(sourceFile, buffer, sizeof(buffer))) > 0) {
      write(destFile, buffer, bytesRead);
   }
   close(sourceFile);
   close(destFile);
   printf("File copied successfully!\n");
   return 0;
}

