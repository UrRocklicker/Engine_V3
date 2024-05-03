#include "objects.h"

std::vector<unsigned int> _Rick = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 254, 155, 125, 1, 120, 23, 16, 120, 23, 14, 49, 51, 37, 33, 35, 34, 127, 19, 17, 19, 50, 32, 123, 23, 12, 122, 22, 14, 128, 19, 14, 55, 61, 59, 63, 62, 62, 63, 62, 62, 48, 49, 48, 40, 50, 49, 145, 124, 59, 225, 190, 163, 236, 238, 224, 251, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 254, 255, 255, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 254, 254, 255, 254, 253, 253, 250, 140, 129, 122, 129, 17, 15, 101, 36, 37, 92, 36, 39, 84, 37, 32, 89, 41, 41, 78, 19, 18, 130, 18, 14, 115, 27, 17, 101, 39, 46, 60, 4, 2, 86, 18, 19, 65, 59, 65, 58, 59, 59, 36, 37, 38, 52, 41, 41, 121, 23, 13, 84, 71, 0, 85, 70, 49, 96, 94, 75, 254, 255, 251, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 254, 255, 255, 255, 252, 255, 249, 148, 122, 99, 120, 22, 16, 127, 21, 13, 123, 22, 14, 123, 22, 15, 124, 21, 14, 63, 57, 63, 122, 22, 14, 58, 44, 37, 17, 18, 20, 21, 21, 20, 20, 20, 20, 19, 20, 15, 36, 37, 36, 18, 21, 20, 30, 33, 38, 66, 76, 75, 33, 33, 35, 61, 60, 61, 61, 61, 61, 217, 193, 155, 250, 255, 255, 255, 254, 255, 255, 255, 255, 254, 254, 254, 255, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 203, 187, 154, 124, 21, 14, 123, 22, 15, 123, 22, 14, 123, 23, 14, 120, 24, 12, 126, 19, 17, 123, 21, 16, 125, 20, 17, 26, 14, 5, 18, 19, 19, 12, 13, 13, 19, 19, 19, 19, 19, 18, 19, 18, 18, 18, 18, 18, 36, 36, 36, 34, 34, 34, 21, 20, 20, 48, 48, 49, 48, 48, 48, 119, 21, 19, 227, 192, 154, 254, 255, 254, 255, 255, 255, 254, 255, 254, 255, 255, 255, 255, 255, 254, 255, 255, 255, 254, 254, 255, 255, 255, 255, 147, 112, 19, 125, 21, 12, 124, 21, 13, 80, 47, 65, 122, 22, 14, 123, 22, 14, 111, 29, 22, 18, 18, 18, 19, 21, 21, 13, 13, 11, 14, 16, 15, 23, 19, 19, 19, 19, 18, 20, 18, 18, 72, 56, 74, 48, 48, 48, 74, 75, 76, 49, 48, 50, 49, 48, 48, 39, 35, 36, 48, 49, 49, 49, 48, 48, 35, 35, 34, 28, 38, 27, 150, 146, 147, 255, 255, 255, 255, 254, 255, 254, 254, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 82, 83, 80, 68, 54, 70, 68, 34, 32, 71, 53, 71, 123, 23, 14, 121, 23, 14, 72, 52, 61, 33, 39, 34, 73, 54, 74, 19, 18, 15, 46, 45, 46, 77, 48, 74, 123, 23, 7, 129, 20, 17, 153, 119, 40, 159, 116, 15, 166, 116, 17, 152, 117, 33, 111, 22, 29, 42, 49, 45, 45, 50, 44, 34, 35, 32, 21, 21, 20, 35, 34, 35, 74, 74, 74, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 254, 255, 255, 254, 255, 254, 255, 254, 255, 254, 138, 137, 135, 129, 21, 15, 123, 23, 10, 75, 51, 75, 123, 22, 8, 122, 21, 8, 118, 25, 21, 124, 22, 15, 124, 20, 12, 123, 21, 17, 155, 35, 19, 158, 31, 14, 157, 120, 14, 192, 159, 120, 186, 122, 25, 193, 123, 14, 193, 121, 10, 158, 120, 12, 131, 45, 0, 123, 24, 18, 47, 49, 46, 19, 19, 18, 36, 37, 37, 36, 36, 36, 72, 73, 73, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 254, 255, 254, 255, 255, 254, 255, 255, 255, 255, 252, 255, 255, 225, 191, 160, 120, 23, 15, 125, 20, 14, 194, 118, 26, 221, 162, 24, 239, 189, 130, 223, 191, 155, 226, 194, 157, 221, 189, 148, 188, 153, 115, 195, 157, 120, 226, 194, 157, 229, 195, 160, 193, 156, 122, 192, 122, 15, 190, 122, 11, 161, 117, 13, 169, 116, 10, 159, 33, 23, 122, 20, 24, 35, 35, 35, 38, 38, 38, 19, 19, 19, 36, 36, 36, 170, 153, 123, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 250, 118, 86, 55, 115, 24, 19, 195, 156, 123, 242, 192, 121, 244, 191, 121, 225, 192, 161, 225, 192, 157, 225, 192, 156, 225, 193, 157, 223, 194, 154, 197, 154, 118, 221, 193, 154, 195, 157, 121, 193, 123, 14, 192, 122, 15, 194, 122, 13, 176, 120, 87, 161, 29, 16, 125, 21, 12, 34, 34, 35, 49, 49, 49, 48, 48, 49, 47, 49, 47, 94, 99, 109, 255, 254, 255, 255, 255, 254, 254, 255, 255, 254, 255, 255, 255, 255, 254, 255, 255, 254, 254, 255, 255, 254, 254, 248, 130, 98, 78, 159, 27, 22, 215, 161, 29, 214, 161, 31, 240, 190, 133, 226, 192, 154, 224, 192, 156, 225, 192, 157, 225, 192, 157, 239, 191, 127, 239, 192, 131, 239, 194, 130, 194, 157, 120, 193, 123, 15, 193, 122, 16, 186, 129, 18, 169, 129, 76, 143, 45, 8, 118, 26, 5, 52, 47, 43, 33, 35, 34, 48, 48, 48, 61, 61, 60, 157, 118, 10, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 254, 255, 255, 255, 254, 255, 255, 254, 253, 254, 134, 132, 118, 120, 24, 8, 193, 158, 121, 192, 156, 120, 226, 194, 156, 224, 192, 156, 225, 192, 159, 225, 192, 157, 190, 158, 120, 191, 156, 119, 224, 192, 157, 224, 159, 122, 199, 154, 124, 194, 122, 15, 189, 123, 13, 164, 120, 13, 162, 120, 12, 161, 120, 12, 161, 120, 13, 152, 126, 135, 34, 34, 37, 61, 61, 61, 55, 40, 45, 195, 159, 107, 254, 254, 255, 255, 255, 255, 254, 255, 255, 255, 255, 254, 254, 255, 255, 255, 255, 254, 255, 254, 255, 255, 254, 255, 168, 168, 168, 118, 22, 10, 193, 158, 120, 193, 158, 118, 230, 194, 158, 226, 191, 158, 223, 160, 117, 192, 158, 121, 193, 157, 121, 193, 158, 120, 191, 159, 111, 191, 126, 6, 134, 15, 6, 123, 22, 15, 124, 22, 15, 120, 23, 16, 124, 21, 16, 123, 20, 16, 124, 21, 19, 160, 121, 16, 31, 32, 34, 48, 48, 48, 121, 23, 10, 117, 12, 20, 254, 254, 252, 255, 255, 254, 255, 255, 254, 255, 254, 255, 255, 255, 255, 255, 255, 254, 254, 254, 255, 254, 255, 255, 243, 244, 239, 108, 26, 12, 198, 161, 108, 201, 160, 104, 184, 121, 26, 142, 32, 9, 182, 44, 4, 190, 123, 18, 191, 162, 120, 197, 154, 120, 209, 152, 104, 159, 30, 16, 160, 121, 106, 119, 20, 9, 113, 25, 20, 102, 17, 15, 151, 35, 20, 107, 24, 20, 114, 27, 0, 155, 123, 15, 48, 46, 59, 60, 60, 61, 120, 22, 21, 123, 22, 15, 255, 252, 251, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 250, 123, 25, 16, 192, 161, 111, 108, 10, 9, 46, 47, 44, 37, 36, 17, 190, 123, 18, 196, 156, 120, 224, 194, 158, 192, 123, 12, 156, 28, 14, 237, 192, 147, 191, 156, 119, 195, 160, 123, 195, 161, 126, 178, 121, 45, 155, 125, 15, 159, 120, 19, 159, 123, 8, 161, 118, 23, 122, 23, 17, 123, 22, 14, 123, 24, 18, 246, 251, 247, 255, 255, 255, 254, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 251, 255, 255, 161, 121, 8, 231, 188, 120, 192, 122, 11, 192, 156, 120, 195, 156, 120, 193, 154, 118, 189, 155, 120, 231, 191, 159, 195, 122, 14, 161, 28, 11, 198, 156, 108, 223, 193, 159, 193, 159, 120, 195, 157, 118, 194, 160, 122, 194, 120, 13, 154, 123, 7, 120, 23, 16, 159, 119, 21, 121, 24, 17, 123, 23, 14, 110, 16, 8, 255, 255, 255, 255, 254, 255, 254, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 238, 237, 235, 225, 192, 139, 195, 161, 120, 225, 192, 157, 226, 192, 157, 196, 162, 125, 193, 158, 121, 196, 156, 121, 188, 126, 6, 157, 28, 17, 203, 118, 22, 192, 158, 121, 192, 159, 120, 197, 157, 117, 177, 123, 32, 173, 121, 74, 164, 28, 18, 126, 19, 13, 160, 119, 18, 121, 24, 17, 118, 24, 12, 74, 51, 41, 255, 255, 254, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 254, 255, 255, 254, 253, 255, 224, 191, 122, 193, 159, 121, 223, 161, 121, 222, 193, 159, 195, 157, 118, 193, 158, 120, 193, 158, 116, 197, 119, 18, 195, 122, 17, 132, 14, 11, 192, 161, 104, 196, 157, 120, 195, 159, 109, 184, 118, 29, 161, 28, 23, 117, 25, 15, 162, 121, 117, 158, 122, 12, 122, 24, 8, 129, 121, 128, 254, 255, 255, 254, 254, 255, 255, 254, 255, 254, 255, 255, 255, 255, 255, 254, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 253, 251, 255, 254, 224, 190, 119, 192, 158, 121, 193, 158, 120, 225, 192, 157, 224, 192, 154, 197, 159, 121, 192, 159, 118, 148, 34, 9, 55, 60, 81, 125, 16, 11, 192, 122, 14, 189, 161, 115, 201, 159, 105, 166, 116, 7, 122, 21, 16, 120, 23, 14, 123, 22, 15, 161, 120, 15, 159, 120, 19, 250, 254, 241, 255, 255, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 254, 255, 255, 254, 255, 252, 254, 255, 241, 240, 236, 212, 202, 149, 223, 190, 152, 198, 164, 127, 192, 158, 120, 193, 158, 120, 197, 157, 118, 195, 144, 87, 207, 156, 75, 200, 135, 107, 190, 101, 57, 172, 117, 34, 195, 120, 18, 192, 122, 15, 170, 118, 12, 165, 116, 9, 125, 20, 14, 125, 21, 13, 120, 22, 7, 166, 126, 67, 111, 42, 45, 92, 81, 87, 91, 89, 74, 118, 115, 110, 131, 131, 81, 130, 130, 86, 255, 255, 255, 255, 255, 255, 255, 254, 255, 254, 254, 255, 254, 254, 252, 247, 234, 227, 223, 190, 113, 224, 190, 119, 225, 193, 119, 192, 157, 121, 193, 158, 120, 193, 158, 120, 191, 158, 112, 193, 158, 116, 192, 159, 116, 191, 156, 116, 194, 159, 119, 184, 122, 33, 161, 118, 0, 128, 21, 12, 157, 123, 15, 158, 121, 14, 164, 123, 127, 120, 23, 17, 114, 25, 19, 126, 19, 13, 123, 21, 17, 50, 49, 46, 62, 63, 63, 48, 48, 48, 47, 46, 52, 59, 60, 62, 255, 255, 255, 255, 255, 254, 254, 255, 255, 255, 255, 255, 253, 254, 254, 234, 204, 180, 224, 189, 121, 191, 159, 120, 193, 159, 120, 192, 158, 123, 192, 162, 126, 191, 159, 120, 196, 151, 128, 209, 153, 96, 194, 127, 19, 190, 119, 13, 131, 21, 19, 125, 27, 10, 114, 21, 19, 124, 25, 8, 191, 127, 16, 157, 117, 20, 90, 86, 100, 122, 24, 13, 58, 63, 66, 132, 14, 8, 114, 22, 7, 67, 58, 61, 64, 65, 65, 37, 37, 37, 62, 62, 62, 34, 34, 35, 255, 255, 254, 254, 255, 255, 255, 255, 255, 253, 252, 245, 239, 205, 156, 215, 181, 127, 209, 170, 113, 184, 142, 58, 193, 122, 15, 183, 122, 16, 171, 135, 73, 187, 134, 84, 192, 159, 123, 193, 158, 118, 189, 134, 67, 179, 83, 60, 172, 82, 47, 159, 79, 9, 166, 78, 20, 160, 121, 20, 179, 125, 17, 104, 28, 0, 96, 43, 25, 66, 60, 54, 61, 48, 58, 111, 32, 37, 40, 34, 37, 38, 52, 52, 48, 48, 48, 46, 46, 46, 27, 27, 26, 74, 74, 74, 255, 255, 255, 254, 255, 254, 255, 221, 188, 234, 156, 1, 234, 184, 119, 216, 159, 54, 192, 121, 3, 190, 123, 14, 160, 30, 16, 162, 30, 19, 161, 29, 17, 121, 24, 8, 193, 158, 121, 193, 158, 119, 199, 156, 116, 192, 158, 121, 191, 163, 123, 196, 155, 125, 190, 124, 11, 156, 122, 12, 173, 110, 24, 80, 52, 67, 41, 49, 52, 48, 49, 50, 48, 49, 48, 46, 47, 42, 35, 36, 38, 35, 35, 35, 35, 35, 35, 59, 59, 59, 85, 84, 85, 85, 84, 85, 255, 255, 255, 235, 227, 214, 221, 190, 123, 195, 160, 104, 196, 155, 123, 183, 137, 77, 191, 123, 21, 157, 32, 0, 158, 31, 16, 130, 19, 11, 124, 20, 14, 195, 206, 201, 244, 237, 219, 191, 157, 119, 193, 158, 120, 193, 158, 120, 191, 158, 120, 178, 128, 36, 193, 120, 18, 160, 29, 9, 119, 26, 11, 44, 50, 49, 35, 35, 35, 48, 48, 48, 49, 49, 49, 49, 49, 49, 60, 60, 60, 48, 49, 48, 47, 47, 47, 36, 37, 36, 62, 62, 62, 121, 121, 118, 176, 152, 128, 187, 148, 101, 193, 158, 120, 193, 159, 120, 185, 114, 35, 162, 74, 0, 135, 16, 16, 124, 21, 15, 119, 19, 21, 252, 255, 255, 255, 253, 255, 255, 255, 254, 255, 253, 253, 254, 251, 244, 118, 112, 100, 160, 118, 14, 168, 119, 5, 162, 126, 84, 121, 22, 17, 107, 28, 24, 109, 27, 16, 116, 22, 22, 120, 23, 17, 47, 47, 49, 76, 76, 76, 75, 75, 74, 72, 72, 72, 60, 61, 61, 87, 86, 87, 10, 10, 10, 128, 129, 129, 157, 157, 123, 196, 155, 141, 213, 158, 54, 195, 157, 118, 200, 122, 11, 200, 119, 18, 143, 21, 13, 120, 24, 13, 113, 28, 8, 107, 101, 101, 158, 160, 129, 193, 194, 155, 254, 254, 253, 255, 254, 254, 187, 189, 164, 132, 132, 144, 153, 158, 128, 159, 119, 8, 165, 116, 12, 163, 122, 14, 162, 117, 18, 167, 118, 123, 111, 23, 28, 70, 56, 67, 84, 71, 70, 71, 73, 72, 63, 63, 62, 46, 46, 46, 103, 103, 103, 111, 111, 111, 21, 20, 21, 157, 158, 115, 135, 133, 134, 221, 160, 16, 195, 158, 116, 194, 125, 6, 194, 122, 10, 155, 33, 22, 124, 22, 10, 66, 57, 74, 80, 71, 73, 124, 125, 124, 75, 74, 72, 59, 61, 54, 156, 157, 123, 161, 157, 126, 112, 109, 102, 59, 60, 65, 67, 63, 60, 153, 161, 109, 179, 128, 17, 162, 119, 10, 188, 124, 8, 181, 105, 32, 126, 82, 81, 94, 111, 103, 112, 114, 113, 94, 95, 94, 61, 60, 61, 92, 93, 93, 113, 113, 113, 125, 125, 125, 133, 133, 133, 155, 157, 118, 136, 134, 130, 195, 159, 113, 182, 120, 17, 193, 123, 12, 128, 19, 12, 114, 23, 18, 135, 105, 107, 189, 178, 182, 136, 136, 136, 94, 94, 94, 32, 32, 32, 48, 50, 48, 60, 61, 61, 74, 73, 75, 105, 105, 105, 71, 71, 71, 45, 45, 45, 29, 29, 27, 144, 143, 141, 149, 160, 120, 91, 81, 54, 86, 69, 53, 158, 158, 150, 112, 111, 116, 104, 104, 104, 93, 92, 92, 151, 154, 123, 124, 123, 129, 85, 85, 85, 125, 124, 124, 150, 154, 128, 155, 158, 129, 136, 135, 133, 193, 124, 5, 193, 123, 12, 164, 29, 17, 130, 19, 10, 61, 57, 71, 96, 90, 91, 96, 95, 93, 61, 60, 61, 35, 34, 35, 19, 19, 19, 61, 61, 61, 73, 73, 72, 76, 76, 77, 105, 105, 105, 84, 84, 84, 60, 61, 60, 48, 48, 49, 123, 123, 123, 156, 157, 125, 18, 18, 18, 76, 72, 73, 19, 18, 23, 114, 114, 116, 124, 124, 125, 113, 113, 113, 135, 134, 132, 18, 19, 18, 73, 73, 72, 30, 30, 30, 133, 133, 135, 135, 134, 135, 155, 156, 116, 193, 122, 15, 148, 54, 0, 116, 21, 24, 68, 54, 69, 20, 20, 23, 94, 92, 94, 60, 60, 61, 48, 48, 48, 36, 37, 36, 37, 37, 36, 72, 73, 73, 84, 84, 84, 74, 75, 74, 105, 105, 105, 73, 73, 73, 62, 62, 62, 38, 39, 38, 150, 151, 151, 144, 144, 142, 36, 36, 36, 93, 93, 93, 13, 13, 12, 13, 12, 12, 134, 134, 134, 143, 143, 143, 149, 149, 147, 19, 19, 19, 121, 121, 121, 15, 14, 15, 133, 133, 132, 124, 124, 124, 156, 158, 108, 190, 124, 14, 129, 110, 49, 31, 30, 28, 19, 19, 19, 21, 21, 21, 14, 15, 15, 13, 13, 13, 12, 12, 13, 19, 18, 19, 15, 15, 15, 62, 62, 63, 84, 84, 85, 95, 95, 95, 120, 121, 121, 92, 92, 92, 70, 70, 71, 46, 46, 49, 154, 152, 132, 34, 35, 35, 13, 13, 13, 51, 51, 51, 13, 13, 13, 48, 49, 48, 124, 124, 124, 91, 90, 91, 18, 19, 15, 18, 19, 19, 105, 104, 105, 54, 54, 54, 134, 134, 135, 121, 121, 121, 137, 135, 133, 100, 105, 106, 55, 56, 58, 19, 19, 19, 12, 12, 12, 13, 13, 13, 13, 12, 12, 18, 19, 18, 13, 13, 13, 13, 13, 13, 20, 20, 21, 47, 47, 46, 73, 73, 73, 72, 72, 72, 125, 125, 125, 106, 106, 106, 92, 92, 92, 60, 63, 64, 156, 154, 131, 36, 36, 36, 34, 35, 35, 48, 48, 48, 14, 14, 15, 49, 49, 49, 150, 150, 150, 63, 63, 63, 13, 12, 13, 92, 93, 93, 95, 95, 95, 104, 105, 105, 118, 118, 118, 115, 115, 115, 134, 132, 133};
Texture Rick(32, 32, _Rick);