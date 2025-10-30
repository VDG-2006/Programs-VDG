package Java.Accounts;

public class LoanAccount extends Account {
    private double balance, annualRate;
    private int termMonths;

    public LoanAccount(double principal, double annualRate, int termMonths) {
        this.balance = principal;
        this.annualRate = annualRate;
        this.termMonths = termMonths;
    }

    public double getOutstandingBalance() { return balance; }

    public void applyMonthlyInterest() { balance += balance * (annualRate / 12.0); }

    public void makePayment(double amt) { if (amt > 0) balance = Math.max(0, balance - amt); }

    public double calculateMonthlyPayment() {
        if (termMonths <= 0) return 0;
        double r = annualRate / 12.0;
        if (r == 0) return balance / termMonths;
        double n = termMonths;
        return balance * (r * Math.pow(1 + r, n)) / (Math.pow(1 + r, n) - 1);
    }

    @Override public String toString() {
        return "LoanAccount{balance=" + balance + ", rate=" + annualRate + ", term=" + termMonths + "}";
    }
}
