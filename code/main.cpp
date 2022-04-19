#include <iostream>
#include <conio.h>
using namespace std;


struct Node{
      int data;
      Node *kiri;
      Node *kanan;
};

void tambah(Node **root, int dataku)
{
      if((*root) == NULL)
      {
            Node *baru;
            baru = new Node;
            baru->data = dataku;
            baru->kiri = NULL;
            baru->kanan = NULL;
            (*root) = baru;
            (*root)->kiri = NULL;
            (*root)->kanan = NULL;
            printf("Data bertambah!");
      }
      //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
      else if(dataku<(*root)->data)
            tambah(&(*root)->kiri, dataku);
     //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
      else if(dataku>(*root)->data)
            tambah(&(*root)->kanan, dataku);
     //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
      else if(dataku == (*root)->data)
            printf("Data sudah ada!");
}

void preOrder(Node *root)
{
      if(root != NULL){
            printf("%d ", root->data);
            preOrder(root->kiri);
            preOrder(root->kanan);
      }
}

void inOrder(Node *root)
{
      if(root != NULL){
            inOrder(root->kiri);
            printf("%d ", root->data);
            inOrder(root->kanan);
      }
}

void postOrder(Node *root)
{
      if(root != NULL){
            postOrder(root->kiri);
            postOrder(root->kanan);
            printf("%d ", root->data);
      }
}

int main()
{
      int pil, data;
      Node *tree;
      tree = NULL;

      do{
            system("cls"); //bersihkan layar
            printf("\tPROGRAM TREE Bahasa C");
            printf("\n\t=====================");
            printf("\nMENU");
            printf("\n----\n");
            printf("1. Input Data\n");
            printf("2. Lihat pre-order\n");
            printf("3. Lihat in-order\n");
            printf("4. Lihat post-order\n");
            cout << "5. Hapus Data";
            printf("6. Keluar\n");
            printf("Pilihan kamu? = ");
            scanf("%d", &pil);
            switch(pil)
            {
                case 1 :
                    printf("\nINPUT : ");
                      printf("\n-------");
                      printf("\nData baru : ");
                      scanf("%d", &data);
                    tambah(&tree, data);
                      break;
                case 2 :
                      printf("\nOUTPUT PRE ORDER : ");
                      printf("\n------------------\n");
                      if(tree!=NULL)
                       //panggil fungsi untuk mencetak data secara preOrder
                        preOrder(tree);
                      else
                        printf("Masih kosong!");
                      break;
                   case 3 :
                      printf("\nOUTPUT IN ORDER : ");
                      printf("\n-----------------\n");
                      if(tree!=NULL)
                       //panggil fungsi untuk mencetak data secara preOrder
                        inOrder(tree);
                      else
                        printf("Masih kosong!");
                      break;
                case 4 :
                  printf("\nOUTPUT POST ORDER : ");
                  printf("\n------------------\n");
                  if(tree!=NULL)
                       //panggil fungsi untuk mencetak data secara postOrder
                        postOrder(tree);
                  else
                        printf("Masih kosong!");
                  break;
                case 5 :
                    tree = NULL;
                    cout << "Semua input data berhasil dihapus.\n";
            }
            getch();
      }
      while(pil!=6);
}
