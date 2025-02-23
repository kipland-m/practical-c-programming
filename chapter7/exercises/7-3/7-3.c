#include <stdio.h>
#include <stdlib.h>
// Exercise 7-3: A serial transmission line can transmit 960 characters each second. Write a program that will calculate the time required to send a file, given the file's size. Try the prog ram on a 400MB (419,430,400 -byte) file. Use appropriate units. (A 400MB file takes days.)
const int tranmissionSpeed = 960;
int timeToTransferSeconds;
float timeToTransferDays;
int fileSize;
int fileSizeInBytes;

int main(int argc, char *argv[]){
  // Given fileSize, it will take timeToTransfer seconds at a rate of 960 bytes per seconds
  if (argc < 2) {
      printf("Usage: %s <fileSizeInMB>\n", argv[0]);
      return 1;
  }
  fileSize = atoi(argv[1]);

  fileSizeInBytes = fileSize * 1048576;
  
  timeToTransferSeconds = fileSizeInBytes / 960;
  timeToTransferDays = timeToTransferSeconds / 86400;

  printf("bytes: %d\ntime to transfer in seconds: %d\n", fileSizeInBytes, timeToTransferSeconds);
  printf("time to transfer in days: %f\n", timeToTransferDays);
  return (0);
}
