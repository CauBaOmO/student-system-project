#include "functions.h"

void listOFYear(string initStrPath){

	
	struct dirent *dir; // bien tro den vi tri o nho cua file
	struct stat dst; // bien dung de kiem tra loai file
	
	DIR* dp = opendir(initStrPath.c_str());
	
	if (dp){
		
		
		for ( dir = readdir(dp); dir != NULL; dir = readdir(dp) ){
			
			bool check = false;
			
			string type = initStrPath + "/" + dir->d_name; // duong dan cua file dang xet;

			if (strcmp(dir->d_name, ".") == 0 || strcmp(dir->d_name, "..") == 0) continue;
			
			if (stat(type.c_str(), &dst) == 0 ) {
				if ( dst.st_mode & S_IFDIR ) cout << dir->d_name << endl;  
			}
		}
	}
	closedir(dp);
}


