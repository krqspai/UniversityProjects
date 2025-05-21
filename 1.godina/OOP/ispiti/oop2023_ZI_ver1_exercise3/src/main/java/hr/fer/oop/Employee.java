package hr.fer.oop;

import java.util.Objects;

public class Employee {
    private String firstName;
    private String lastName;
    private int proposedInnovations;
    private int implementedInnovations;

    public Employee(String firstName, String lastName, int proposedInnovations, int implementedInnovations) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.proposedInnovations = proposedInnovations;
        this.implementedInnovations = implementedInnovations;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public int getProposedInnovations() {
        return proposedInnovations;
    }

    public int getImplementedInnovations() {
        return implementedInnovations;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Employee employee = (Employee) o;
        return firstName.equals(employee.firstName) && lastName.equals(employee.lastName);
    }

    @Override
    public int hashCode() {
        return Objects.hash(firstName, lastName);
    }

    @Override
    public String toString() {
        return firstName + " " + lastName + " [proposed: " + proposedInnovations + ", implemented: " + implementedInnovations + "]";
    }
}
