#include <stdio.h>
struct  book
{
    /* data */
    unsigned int bookid; //书号
    char bookname[50]; //书名
    char author[50]; //作者
    unsigned int booknumber; //数量
    void (*showBookInfo) (struct book *);
    void (*modifyStock) (struct book *);
    void (*isStockEnough) (struct book *);
};

void showBookInfo(struct book *book)
{
    printf("书号：%d\n", book->bookid);
    printf("书名：%s\n", book->bookname);
    printf("作者：%s\n", book->author);
    printf("数量：%d\n", book->booknumber);
}
void modifyStock(struct book *book)
{
    printf("请输入修改后的数量：");
    int number;
    scanf("%d", &number);
    if(number < 0){
        printf("数量不能小于0!\n");
        return;
    }
    book->booknumber = number;
    printf("修改成功！\n");
}
void isStockEnough(struct book *book)
{
    printf("请输入要借阅的数量：");
    int number;
    scanf("%d", &number);
    if(number > book->booknumber){
        printf("库存不足！\n");
        return;
    }
    book->booknumber -= number;
    printf("借阅成功！\n");
}
int main()
{
    
    
    return 0;
}
