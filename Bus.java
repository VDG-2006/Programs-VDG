public class Bus {
    private String busId;
    private String operator;
    private Integer capacity;
    private Double farePerSeat;

    public Bus(String busId, String operator, Integer capacity, Double farePerSeat) {
        this.busId = busId;
        this.operator = operator;
        this.capacity = capacity;
        this.farePerSeat = farePerSeat;
    }

    public String getBusId() {
        return busId;
    }

    public void display() {
        System.out.println("Bus Id:" + busId);
        System.out.println("Operator:" + operator);
        System.out.println("Capacity:" + capacity);
        System.out.printf("Fare Per Seat:%.1f\n", farePerSeat);
    }
}
