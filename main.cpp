#pragma once
#include "nhahang.h"





int main() {

    const string BLUE_BORDER = "\033[1;34m";
    const string RESET_COLOR = "\033[0m";

    cout << BLUE_BORDER;

    NhaHang nhaHang;
    nhaHang.themMenuSan();

    QuanLyNhanVien qlNhanVien;
    qlNhanVien.danhSachNhanViensan();

    for (int i = 1; i <= 30; ++i) {
        nhaHang.themBanAn(i);
    }

    int luaChon;

    do {
        system("cls");
        cout << BLUE_BORDER;
        cout << "+-----------------------------------+" << endl;
        cout << "|          Quan li nha hang         |" << endl;
        cout << "+-----------------------------------+" << endl;
        cout << "| 1. Hien thi ban trong             |" << endl;
        cout << "| 2. Dat ban                        |" << endl;
        cout << "| 3. Hien thi menu                  |" << endl;
        cout << "| 4. Goi mon an cho ban             |" << endl;
        cout << "| 5. Thanh toan                     |" << endl;
        cout << "| 6. Hien thi doanh thu             |" << endl;
        cout << "| 7. Them mon an vao menu           |" << endl;
        cout << "| 8. Them hoi vien                  |" << endl;
        cout << "| 9. Xoa hoi vien                   |" << endl;
        cout << "| 10.Hien thi danh sach hoi vien    |" << endl;
        cout << "| 11.Hien thi danh sach nhan vien   |" << endl;
        cout << "| 12.Them nhan vien                 |" << endl;
        cout << "| 13.Xoa nhan vien                  |" << endl;
        cout << "| 14.Thoat                          |" << endl;
        cout << "+-----------------------------------+" << RESET_COLOR << endl;
        luaChon = nhapSo("Nhap lua chon: ");

        system("cls");

        switch (luaChon) {

        case 1:
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 1. Hien thi ban trong             |" << endl;
            cout << "+-----------------------------------+" << endl;
            nhaHang.hienThiBanTrong();

            break;

        case 2: {
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 2. Dat ban                        |" << endl;
            cout << "+-----------------------------------+" << endl;
            int soBan = nhapSo("Nhap so ban muon dat: ");
            nhaHang.datBan(soBan);
            break;
        }

        case 3:
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;

            nhaHang.hienThiMenu2();
            break;
        case 4: {
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 4. Goi mon an cho ban             |" << endl;
            cout << "+-----------------------------------+" << endl;

            int maBan = nhapSo("Nhap so ban: ");
            nhaHang.hienThiMenu2();


            vector<int> danhSachMaMon;
            int maMon;
            char tiepTuc;

            do {
                maMon = nhapSo("Nhap ma mon muon goi: ");
                danhSachMaMon.push_back(maMon);
                cout << "Ban co muon goi them mon khong? (y/n): ";
                cin >> tiepTuc;
            } while (tiepTuc == 'y' || tiepTuc == 'Y');


            nhaHang.goiMon(maBan, danhSachMaMon);
            break;
        }

        case 5: {

            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 5. Thanh toan                     |" << endl;
            cout << "+-----------------------------------+" << endl;

            int soBan = nhapSo("Nhap so ban: ");
            nhaHang.thanhToanBan(soBan);
            break;
        }
        case 6: {
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 6. Hien thi doanh thu             |" << endl;
            cout << "+-----------------------------------+" << endl;

            nhaHang.hienThiDoanhThu();
            break;
        }




        case 7:
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 7. Them mon an vao menu           |" << endl;
            cout << "+-----------------------------------+" << endl;
            nhaHang.themMonAn();
            break;

        case 8:
            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 8. Them hoi vien                  |" << endl;
            cout << "+-----------------------------------+" << endl;



            nhaHang.themHoiVien();
            break;
        case 9:

            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 9. Xoa hoi vien                   |" << endl;
            cout << "+-----------------------------------+" << endl;

            nhaHang.xoaHoiVien();
            break;

        case 10:

            cout << BLUE_BORDER;
            cout << "+-----------------------------------+" << endl;
            cout << "|          Quan li nha hang         |" << endl;
            cout << "+-----------------------------------+" << endl;
            cout << "| 10.Hien thi danh sach hoi vien    |" << endl;
            cout << "+-----------------------------------+" << endl;

            nhaHang.hienThiDanhSachHoiVien();
            break;

        case 11:
            cout << BLUE_BORDER;
            qlNhanVien.hienThiDanhSachNhanVien();
            break;

        case 12: {
            cout << BLUE_BORDER;

            string ten, sdt, gioiTinh, diaChi, chucVu;
            int tuoi;
            double luong;


            do {
                cout << "Nhap ten nhan vien: ";
                cin.ignore();
                getline(cin, ten);
                if (!isValidName(ten)) {
                    cout << "Loi: Ten khong duoc de trong!\n";
                }
            } while (!isValidName(ten));


            do {
                cout << "Nhap so dien thoai: ";
                getline(cin, sdt);
                if (!isValidPhoneNumber(sdt)) {
                    cout << "Loi: So dien thoai khong hop le!\n";
                }
            } while (!isValidPhoneNumber(sdt));


            do {
                tuoi = nhapSo("Nhap tuoi: ");
                if (tuoi < 18 || tuoi > 60) {
                    cout << "Loi: Tuoi phai tu 18 den 60!\n";
                }
            } while (tuoi < 18 || tuoi > 60);


            do {
                cout << "Nhap gioi tinh (Nam/Nu/Khac): ";
                getline(cin, gioiTinh);
                if (gioiTinh != "Nam" && gioiTinh != "Nu" && gioiTinh != "Khac") {
                    cout << "Loi: Gioi tinh chi duoc la 'Nam', 'Nu', hoac 'Khac'!\n";
                }
            } while (gioiTinh != "Nam" && gioiTinh != "Nu" && gioiTinh != "Khac");

            cout << "Nhap dia chi: ";
            getline(cin, diaChi);


            string luongStr;
            do {
                cout << "Nhap luong: ";
                cin >> luongStr;
                if (!isNumber(luongStr)) {
                    cout << "Loi: Vui long nhap mot so luong hop le!\n";
                }
            } while (!isNumber(luongStr));
            luong = stod(luongStr);


            cin.ignore();
            cout << "Nhap chuc vu: ";
            getline(cin, chucVu);


            qlNhanVien.themNhanVien(NhanVien(ten, sdt, tuoi, gioiTinh, diaChi, luong, chucVu));
            cout << "Da them nhan vien thanh cong!\n";
            break;
        }
        case 13: {
            int index;
            cout << "Nhap chi so nhan vien can xoa: ";
            cin >> index;

            qlNhanVien.xoaNhanVien(index - 1);
            cout << "Da xoa nhan vien!\n";
            break;
        }


        case 14:
            cout << "Cam on! Hen gap lai!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }


        cout << BLUE_COLOR << "Nhan phim bat ky de tiep tuc..." << RESET_COLOR << endl;
        cin.ignore();
        cin.get();

    } while (luaChon != 14);
    cout << RESET_COLOR << endl;
    return 0;
}