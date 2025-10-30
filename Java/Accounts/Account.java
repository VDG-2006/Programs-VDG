package Java.Accounts;

public class Account {
    private String id;
    private double balance;

    public Account(){
        this.id="None";
        this.balance=0.0;
    }
    public Account(String id, double initialBalance) {
        this.id = id;
        this.balance = initialBalance;
    }

    public String getId() { return id; }
    public double getBalance() { return balance; }

    public void setId(String id) { this.id = id; }
    public void setBalance(double balance) { this.balance = balance; }

    public void deposit(double amount) {
        if (amount <= 0) throw new IllegalArgumentException("Amount must be positive");
        balance += amount;
    }

    public boolean withdraw(double amount) {
        if (amount <= 0) throw new IllegalArgumentException("Amount must be positive");
        if (amount > balance) return false;
        balance -= amount;
        return true;
    }
    
    protected void adjustBalance(double delta) {
        balance += delta;
    }

    @Override
    public String toString() {
        return String.format("%s[id=%s, balance=%.2f]", getClass().getSimpleName(), id, balance);
    }
}
