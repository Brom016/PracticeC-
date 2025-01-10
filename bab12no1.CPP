#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

class Pegawai {
private:
    char nama[50];
    int jamKerja;

public:
    void setData(const char* namaPegawai, int jamKerjaPegawai) {
        strcpy(nama, namaPegawai);
        jamKerja = jamKerjaPegawai;
    }

    const char* getNama() {
        return nama;
    }

    int getJamKerja() {
        return jamKerja;
    }

    int hitungHonor() {
        const int honorHarian = 25000;
        const int honorLemburPerJam = 1500;
        const int jamNormal = 8;

        if (jamKerja <= jamNormal) {
            return jamKerja * (honorHarian / jamNormal);
        } else {
            int jamLembur = jamKerja - jamNormal;
            return (honorHarian + (jamLembur * honorLemburPerJam));
        }
    }

    int hitungHonorLembur() {
        const int jamNormal = 8;
        const int honorLemburPerJam = 1500;

        if (jamKerja > jamNormal) {
            return (jamKerja - jamNormal) * honorLemburPerJam;
        } else {
            return 0;
        }
    }
};

void garis() {
    printf("==========================================================================\n");
}

int main() {

    int jumlahPegawai;
    char tanggal[50];

    printf("PT. Meriang Gembira\n");
    printf("Jumlah Pegawai: ");
    scanf("%d", &jumlahPegawai);
    getchar(); // Membersihkan buffer input
    printf("Tanggal Input: ");
    gets(tanggal);

    Pegawai pegawai[100]; // Maksimal 100 pegawai

    for (int i = 0; i < jumlahPegawai; i++) {
        char nama[50];
        int jamKerja;

        printf("\nData Ke-%d\n", i + 1);
        printf("Nama Pegawai: ");
        gets(nama);
        printf("Jumlah Jam Kerja: ");
        scanf("%d", &jamKerja);
        getchar();

        pegawai[i].setData(nama, jamKerja);
    }

    printf("==========================================================================\n");
    printf("PT. Meriang Gembira\n");
    printf("Tanggal: %s\n", tanggal);
    garis();
    printf("%-5s %-20s %-10s %-10s %-15s %-10s\n", "No.", "Nama Pegawai", "Honor", "Jam Kerja", "Honor Lembur", "Total Honor");
    garis();

    int totalHonorSemua = 0;

    for (int i = 0; i < jumlahPegawai; i++) {
        int honor = pegawai[i].hitungHonor();
        int honorLembur = pegawai[i].hitungHonorLembur();

        printf("%-5d %-20s %-10d %-10d %-15d %-10d\n", i + 1, pegawai[i].getNama(), honor, pegawai[i].getJamKerja(), honorLembur, honor + honorLembur);

        totalHonorSemua += (honor + honorLembur);
    }

    garis();
    printf("Total Honor Pegawai Sebesar: %-10d\n", totalHonorSemua);

    getch();
    return 0;
}
