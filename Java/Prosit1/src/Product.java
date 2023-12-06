public class Product {
    int identifier;
    String caption;
    String brand;
    float price;
    public Product(){
        System.out.println("Creation Of A New Product Done");
    }
    public Product(int id, String cap, String br){
        this.identifier=id;
        this.caption=cap;
        this.brand=br;
    }
    public Product(int id, String cap, String br, float pr){
        this.identifier=id;
        this.caption=cap;
        this.brand=br;
        this.price=pr;
    }
    public void view() {
        System.out.println("id:"+this.identifier)  ;
        System.out.println("caption:"+this.caption)  ;
        System.out.println("brand:"+this.brand)  ;
        System.out.println("price:"+this.price)  ;
    }
    public String toString(){
        return identifier +","+this.caption+","+this.brand+","+price;
    }
}
