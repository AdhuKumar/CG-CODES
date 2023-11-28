#include <stdio.h>
#include <math.h>

void rotatePoint(int x, int y, int angle, int *newX, int *newY) {
  // Convert angle to radians
  double angleRad = (double) angle * M_PI / 180.0;

  // Calculate new coordinates after rotation
  *newX = (int)(x * cos(angleRad) - y * sin(angleRad) + 0.5);
  *newY = (int)(y * sin(angleRad) - x * cos(angleRad) + 0.5);
}

int main() {
  // Original point coordinates
  int x = 5, y = 5;

  // Rotation angle in degrees
  int rotationAngle = 30;

  // Rotate the point
  int newX, newY;
  rotatePoint(x, y, rotationAngle, &newX, &newY);

  // Display the result
  printf("Original Point: (%d, %d)\n", x, y);
  printf("Rotated Point: (%d, %d)\n", newX, newY);

  return 0;
}