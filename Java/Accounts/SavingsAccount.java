package Java.Accounts;

public class SavingsAccount extends Account {
    private double interestRate = 0.01;

    public SavingsAccount() {
        super();
    }

    public SavingsAccount(double interestRate) {
        super();
        setInterestRate(interestRate);
    }

    public double getInterestRate() {
        return interestRate;
    }

    public void setInterestRate(double interestRate) {
        if (interestRate < 0) throw new IllegalArgumentException("Interest rate must be non-negative");
        this.interestRate = interestRate;
    }

    public void applyAnnualInterest() {
        double interest = getBalance() * interestRate;
        if (interest > 0) deposit(interest);
    }
}
