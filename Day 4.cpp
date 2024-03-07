#include <sstream>
#include <string>
#include <openssl/md5.h>
using namespace std;


int main() {
    string prefix = "ckczppom";
    int count = 0;

    unsigned char hash[MD5_DIGEST_LENGTH];

    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, prefix.c_str(), prefix.size());
    MD5_Final(hash, &md5);

    stringstream ss;

    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {

    }

    return 0;
}
