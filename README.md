# TC122G | PERTEMUAN 13

**SORTING**

>Kumpulan node yang saling terhubung satu  sama lain dalam suatu kesatuan yang  membentuk layakya struktur sebuah pohon.
>Struktur pohon adalah suatu cara  merepresentasikan suatu struktur hirarki  (one-to-many) secara grafis yang mirip  sebuah pohon,
>walaupun pohon tersebut  hanya tampak sebagai kumpulan node-node  dari atas ke bawah.

**JENIS TREE**

###### **A. Tree Statik**
>isi node-nodenya tetap karena  bentuk pohonnya sudah ditentukan.

###### **B. Tree Dinamik**
>isi nodenya berubah-ubah  karena proses penambahan (insert) dan  penghapusan (delete)

**NODE ROOT**
>Node root dalam sebuah tree adalah suatu  node yang memiliki hierarki tertinggi dan  dapat juga memiliki node-node anak.
>Semua  node dapat ditelusuri dari node root tersebut. Node root adalah node khusus yang tercipta  pertama kalinya.
>Node-node lain di bawah node root saling  terhubung satu sama lain dan disebut subtree.

**TERMINOLOGI TREE**
>• Predecesor
>
>  Node yang berada diatas node tertentu
>  
>• Successor
>
>  Node yang berada dibawah node tertentu
>  
>• Ancestor
>
>  Seluruh node yang terletak sebelum node tertentu dan terletak pada jalur yang sama
>  
>• Descendant
>
>  Seluruh node yang terletak setelah node tertentu dan terletak pada jalur yang sama
>  
>• Parent
>
>  Predecessor satu level di atas suatu node
>  
>• Child
>
>  Successor satu level di bawah suatu node
>  
>• Sibling
>
>  Node - node yang memiliki parent yang sama
>  
>• Subtree
>
>  Suatu node berserta decendantnya
>  
>• Size
>
>  Banyaknya node dalam suatu tree
>  
>• Height
>
>  Banyaknya tingkatan dalam suatu tree
>  
>• Root
>
>  Node khusus yang tidak memiliki predecessor
>  
>• Leaf
>
>  Node - node dalam tree yang tidak memiliki successor
>  
>• Degree
>
>  Banyaknya child dalam suatu node
>  

**BINARY TREE**
>Suatu tree dengan syarat bahwa tiap  node hanya boleh memiliki maksimal dua  subtree dan kedua subtree tersebut  harus terpisah.
>Tiap node dalam binary tree hanya boleh  memiliki paling banyak dua child.

>Tipe binary tree :
>
>✓ Full Binary Tree
>
>  Semua node ( kecuali leaf ) pasti memiliki 2 anak dan tiap subtree memiliki panjang path yang sama
>  
>✓ Complete Binary Tree
>
>   Mirip dengan "Full Binary Tree", tapi tiap subtree boleh memiliki panjang path yang berbada dan tiap node ( kecuali leaf ) memiliki 2 anak
>  
>✓ Skewed Binary Tree
>
>  Binary tree yang semua nodenya ( kecuali leaf ) hanya memiliki satu anak
>  

**NODE pada BINARY TREE**
>Jumlah maksimum node pada setiap tingkat adalah 2n, node pada binary tree maksimum berjumlah 2n-1

**Implementasi Program**
>Tree dapat dibuat dengan menggunakan _**linked list**_ secara rekursif.
>Data yang pertama kali masuk akan menjadi  node root.
>Data yang lebih kecil dari data node root  akan masuk dan menempati node kiri dari  node root,
>sedangkan jika lebih besar dari  data node root, akan masuk dan menempati  node di sebelah kanan node root.

**OPERASI TREE**
>• Create : Membentuk sebuah tree baru yang kosong.
>
>• Clear : Menghapus semua elemen tree.
>
>• Empty : Mengetahui apakah tree kosong atau tidak.
>
>• Insert : Menambah node ke dalam Tree secara  rekursif. Jika data yang akan dimasukkan lebih besar  daripada elemen root, maka akan diletakkan di node  sebelah kanan, sebaliknya jika lebih kecil maka akan  diletakkan di node sebelah kiri. Untuk data pertama  akan menjadi elemen root.
>
>• Find : Mencari node di dalam Tree secara rekursif  sampai node tersebut ditemukan dengan  menggunakan variable bantuan ketemu. Syaratnya adalah tree tidak boleh kosong.
>
>• Transverse : operasi kunjungan terhadap node-node  dalam pohon dimana masing-masing node  akan dikunjungi sekali.
>
>• Count: Menghitung jumlah node dalam Tree.
>
>• Height : Mengetahui kedalaman sebuah Tree.
>
>• Find Min dan Find Max : Mencari nilai terkecil dan terbesar pada Tree.
>
>• Child : Mengetahui anak dari sebuah node (jika punya).
>

`| Language | ID |`
```
source :
Evangs Mailoa, S.Kom., M.Cs., class of TC122G. 2022. ASD - Sorting.pdf (April 11)
```
