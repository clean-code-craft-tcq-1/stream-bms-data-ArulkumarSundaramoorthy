package receiver;

import receiver.model.BatteryCharacteristic;

public class ReportingService {
	public void printProcessedData(String parameterName, BatteryCharacteristic batteryCharacteristic) {
		System.out.println("Minimum " + parameterName + " : " + batteryCharacteristic.min);
		System.out.println("Maximum " + parameterName + " : " + batteryCharacteristic.max);
		System.out.println("Average " + parameterName + " : " + batteryCharacteristic.avg);
	}
}
