#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip> 
#include <cstdlib>
#include <map>



using namespace std;

extern const string BLUE_COLOR;
extern const string RESET_COLOR;
extern const string RED_COLOR;

int nhapSo(const string& prompt);
bool isDigit(char c);                       
bool isNumber(const std::string& s);         
bool isValidPhoneNumber(const std::string& phoneNumber);  
bool isValidName(const std::string& name);   
     
bool isLetter(char c);                       
bool isAllLetters(const std::string& s);




class MonAn {
private:
    string maMon;
    string tenMon;
    string loaiMon;
    double giaTien;
    double chiPhi;

public:
    MonAn(string ma, string ten, string loai, double gia, double chiPhi)
        : maMon(ma), tenMon(ten), loaiMon(loai), giaTien(gia), chiPhi(chiPhi) {}

    string getMaMon() const;
    string getTenMon() const;
    string getLoaiMon() const;
    double getGiaTien() const;
    double getChiPhi() const;
    void hienThiMonAn() const;
    void hienThiMonAn2() const;
    void hienThiMonAn3() const;
};


class BanAn {
private:
    int soBan;
    vector<MonAn> danhSachMonAn;
    double tongTien;
    bool daDuocDat;

   

public:
    BanAn(int so);
    int getSoBan() const;
    void themMonAn(const MonAn& mon);
  

    double getTongTien() const;
    double getChiPhi() const;

    void thanhToan();

    bool getDaDuocDat() const;
    void datBan();
   
};



class KhachHang {
private:
    string sdt;
    string ten;
    int diemTichLuy;
    int soLanVaoNhaHang;

public:
    KhachHang(string ma, string tenKH);
    string getSdt() const;
    string getTen() const;
    int getDiemTichLuy() const;
    void tichDiem();
    double quyDoiDiem();
    void hienThiThongTin() const;
};

class NhanVien : public KhachHang {
private:
    int tuoi;
    string gioiTinh;
    string diaChi;
    double luong;
    string chucVu;

public:

    NhanVien(string tenKH, string sdt, int t, string gt, string dc, double l, string cv);


    int getTuoi() const;
    string getGioiTinh() const;
    string getDiaChi() const;
    double getLuong() const;
    string getChucVu() const;

    void setTuoi(int t);
    void setGioiTinh(const string& gt);
    void setDiaChi(const string& dc);
    void setLuong(double l);
    void setChucVu(const string& cv);

    void hienThiThongTin() const;
};

class QuanLyNhanVien {
private:
    vector<NhanVien> danhSachNhanVien;

public:
    void themNhanVien(const NhanVien& nv);
    void xoaNhanVien(int index);
    void hienThiDanhSachNhanVien() const;
    void danhSachNhanViensan();
};


class NhaHang {
private:
    vector<MonAn> menu;
    vector<BanAn> danhSachBanAn;
    vector<KhachHang> danhSachHoiVien;
    map<int, int> soLuongMonBanRa;

    double doanhThu;
    double chiPhi;


public:
    NhaHang();
    void themBanAn(int soBan);
    BanAn* timBanAn(int soBan);
    void hienThiMenu() const;
    void hienThiMenu2() const;
    void themMonAnVaoMenu(const MonAn& mon);
    bool kiemTraMonAnTonTai(const MonAn& mon) const;
    void goiMon(int soBan, const std::vector<int>& danhSachMaMon);
    void thanhToanBan(int soBan);
    void hienThiDoanhThu() const;
    void themMenuSan();
    void themMonAn();
    void themHoiVien();
    void xoaHoiVien();
    KhachHang* timHoiVien(const string& maHoiVien);
    void hienThiDanhSachHoiVien() const;
    void hienThiBanTrong() const;

    void datBan(int soBan);
    


};


