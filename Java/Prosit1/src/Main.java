
public class Main {

    public static void main(String[] args) {
        Product p1= new Product(1021,"Milk","Delice");
        Product p2= new Product(2510,"Yogurt","Vitalait");
        Product p3= new Product(3250,"Tomato","Sicam",1.2f);
        //Displaying everything
    p1.view();
    p2.view();
    p3.view();
    //updating the price in p1
    p1.price=0.7f;
    p1.view();
    //completing the missing info
    p2.price=7.5f;
    System.out.println("modified products:");
    p1.view();
    p2.view();
    p3.view();
    //affichage toString
    System.out.println(p1.toString());
    }
}